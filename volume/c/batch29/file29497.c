// fichero 29497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29497;

Registro29497 crear_registro29497(int id) {
    Registro29497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
