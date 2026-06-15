// fichero 25633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25633;

Registro25633 crear_registro25633(int id) {
    Registro25633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
