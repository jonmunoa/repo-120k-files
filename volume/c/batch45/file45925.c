// fichero 45925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45925;

Registro45925 crear_registro45925(int id) {
    Registro45925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
