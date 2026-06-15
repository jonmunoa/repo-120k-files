// fichero 25709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25709;

Registro25709 crear_registro25709(int id) {
    Registro25709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
