// fichero 48469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48469;

Registro48469 crear_registro48469(int id) {
    Registro48469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
