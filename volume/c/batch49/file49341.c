// fichero 49341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49341;

Registro49341 crear_registro49341(int id) {
    Registro49341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
