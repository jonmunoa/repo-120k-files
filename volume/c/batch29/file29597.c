// fichero 29597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29597;

Registro29597 crear_registro29597(int id) {
    Registro29597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
