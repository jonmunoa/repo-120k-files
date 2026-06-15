// fichero 29845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29845;

Registro29845 crear_registro29845(int id) {
    Registro29845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
