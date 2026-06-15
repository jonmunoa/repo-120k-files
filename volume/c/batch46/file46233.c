// fichero 46233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46233;

Registro46233 crear_registro46233(int id) {
    Registro46233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
