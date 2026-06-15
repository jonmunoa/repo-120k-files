// fichero 973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro973;

Registro973 crear_registro973(int id) {
    Registro973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
