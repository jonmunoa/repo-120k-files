// fichero 48373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48373;

Registro48373 crear_registro48373(int id) {
    Registro48373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
