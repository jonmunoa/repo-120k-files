// fichero 48433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48433;

Registro48433 crear_registro48433(int id) {
    Registro48433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
