// fichero 48341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48341;

Registro48341 crear_registro48341(int id) {
    Registro48341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
