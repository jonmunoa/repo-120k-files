// fichero 25497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25497;

Registro25497 crear_registro25497(int id) {
    Registro25497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
