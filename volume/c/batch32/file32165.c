// fichero 32165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32165;

Registro32165 crear_registro32165(int id) {
    Registro32165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
