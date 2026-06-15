// fichero 48573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48573;

Registro48573 crear_registro48573(int id) {
    Registro48573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
