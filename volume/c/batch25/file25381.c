// fichero 25381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25381;

Registro25381 crear_registro25381(int id) {
    Registro25381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
