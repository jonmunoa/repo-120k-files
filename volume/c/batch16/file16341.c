// fichero 16341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16341;

Registro16341 crear_registro16341(int id) {
    Registro16341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
