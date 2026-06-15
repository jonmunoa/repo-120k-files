// fichero 6253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6253;

Registro6253 crear_registro6253(int id) {
    Registro6253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
