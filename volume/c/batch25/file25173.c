// fichero 25173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25173;

Registro25173 crear_registro25173(int id) {
    Registro25173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
