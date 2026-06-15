// fichero 25261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25261;

Registro25261 crear_registro25261(int id) {
    Registro25261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
