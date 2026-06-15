// fichero 33157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33157;

Registro33157 crear_registro33157(int id) {
    Registro33157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
