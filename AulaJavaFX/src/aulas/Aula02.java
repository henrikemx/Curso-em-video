package aulas;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.paint.Color;
import javafx.scene.shape.Line;
import javafx.scene.shape.StrokeLineCap;
import javafx.stage.Stage;

/**
 * @author kryptonian
 * @version 1.0
 * 
 * */

public class Aula02 extends Application {

	public static void main(String[] args) {

		launch(args);

	} // fim do metodo main

	@Override
	public void start(Stage primaryStage) throws Exception {
		primaryStage.setTitle("Aula 02 - Desenho de linhas");
		Image imagem = new Image("imagens/iconeJanela1.png");
		primaryStage.getIcons().add(imagem);
		
		Group root = new Group();
		Scene scene = new Scene(root, 300, 150, Color.GREY);
		
		Line redLine = new Line(10, 10, 290, 10);
		redLine.setStroke(Color.RED);
		redLine.setStrokeWidth(10);
		
		Line whiteLine = new Line();
		whiteLine.setStartX(10);
		whiteLine.setStartY(30);
		whiteLine.setEndX(290);
		whiteLine.setEndY(30);
		whiteLine.setStroke(Color.WHITE);
		whiteLine.setStrokeWidth(10);
		whiteLine.setStrokeLineCap(StrokeLineCap.ROUND);
		
		Line blueLine = new Line(10, 50, 290, 50);
		blueLine.setStroke(Color.BLUE);
		blueLine.setStrokeWidth(10);
		blueLine.getStrokeDashArray().addAll(10d, 5d, 15d, 5d, 20d);
		blueLine.setStrokeDashOffset(0);
		blueLine.setStrokeLineCap(StrokeLineCap.BUTT);
		
		root.getChildren().add(redLine);
		root.getChildren().add(whiteLine);
		root.getChildren().add(blueLine);
		
		primaryStage.setScene(scene);
		primaryStage.show();
		
	} //  fim do metodo start

} // fim da classe Aula02
