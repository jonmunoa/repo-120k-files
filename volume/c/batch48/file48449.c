// fichero 48449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48449;

Registro48449 crear_registro48449(int id) {
    Registro48449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
