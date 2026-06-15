// fichero 6341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6341;

Registro6341 crear_registro6341(int id) {
    Registro6341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
