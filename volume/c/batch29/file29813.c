// fichero 29813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29813;

Registro29813 crear_registro29813(int id) {
    Registro29813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
