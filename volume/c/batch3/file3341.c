// fichero 3341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3341;

Registro3341 crear_registro3341(int id) {
    Registro3341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
