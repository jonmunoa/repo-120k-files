// fichero 32157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32157;

Registro32157 crear_registro32157(int id) {
    Registro32157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
