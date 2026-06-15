// fichero 37341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37341;

Registro37341 crear_registro37341(int id) {
    Registro37341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
