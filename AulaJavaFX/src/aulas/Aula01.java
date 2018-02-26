package aulas;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

/**
 * @author Henrique
 * @version 1.0
 * 
 * */

public class Aula01 extends Application {
	
	public static void main(String[] args) {
		launch(args);
		
	} // fim do método main

	@Override
	public void start(Stage primaryStage) throws Exception {
		Image imagem = new Image("imagens/iconeJanela1.png");
		primaryStage.setTitle("Aula 01 - Olá, Mundo !!");
		primaryStage.getIcons().add(imagem);
		
		Group root = new Group();
		Scene scene = new Scene(root, 300, 300, Color.CADETBLUE);
		
		Button btn_ola = new Button("Clique aqui !!");
		Label lbl_ola = new Label("Minha primeira janela em JavaFX !!\nClique no botão abaixo e veja o que acontece...");
		
		btn_ola.setLayoutX(30);
		btn_ola.setLayoutY(100);
		
		lbl_ola.setLayoutX(30);
		lbl_ola.setLayoutY(50);
		
		root.getChildren().addAll(btn_ola, lbl_ola);
		
		btn_ola.setOnAction(new EventHandler<ActionEvent>() {
			
			@Override
			public void handle(ActionEvent event) {
				lbl_ola.setText("Surpresa !!!\nVeja que agora o texto mudou !!");
				
			} // fim do metodo handler
		});
		
		primaryStage.setScene(scene);
		primaryStage.show();
		
	} // fim do método start
	
} // fim da classe Aula01
