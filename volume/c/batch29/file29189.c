// fichero 29189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29189;

Registro29189 crear_registro29189(int id) {
    Registro29189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
