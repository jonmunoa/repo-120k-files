// fichero 20173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20173;

Registro20173 crear_registro20173(int id) {
    Registro20173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
