/**
 * @file Temazo.h
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @desc Clase Temazo para las prácticas de POO
 * @date 12 de octubre de 2015, 17:08
 */

#include <string>
#ifndef TEMAZO_H
#define TEMAZO_H

/**
 @brief Clase que guarda los datos de un temazo
 */
class Temazo {
public:
    Temazo();
    Temazo(std::string titulo, std::string interprete, int duracion, int puntuacion = 0);
    Temazo(const Temazo& orig);
    virtual ~Temazo();
    int getPuntuacion() const;
    void setDuracion(int duracion);
    int getDuracion() const;
    void setInterprete(std::string interprete);
    std::string getInterprete() const;
    void setTitulo(std::string titulo);
    std::string getTitulo() const;
    
    // Añadido en práctica 3
    void incrementarPuntuacion(int puntos);
    bool debeEstarEnLaLista() const;

private:
    std::string titulo; ///< Título de la canción
    std::string interprete; ///< Intérprete
    int duracion; ///< Duración en segundos
    int puntuacion; ///< Puntuación en función de cómo la acoge el público

    // Añadido en práctica 3
    static int numTemazos; ///< Número de temazos que s ellevan instanciados
    static int puntuacionTotal; ///< Puntuación total de todos los temazos

    static void incrementarPuntuacionTotal(int puntos);
    static void decrementarPuntuacionTotal(int puntos);
    static double calcularPuntuacionMedia();

};

#endif /* TEMAZO_H */
