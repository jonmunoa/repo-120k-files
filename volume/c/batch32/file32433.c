// fichero 32433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32433;

Registro32433 crear_registro32433(int id) {
    Registro32433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
