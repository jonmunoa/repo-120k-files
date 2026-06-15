// fichero 48005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48005;

Registro48005 crear_registro48005(int id) {
    Registro48005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
