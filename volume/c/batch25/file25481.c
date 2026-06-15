// fichero 25481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25481;

Registro25481 crear_registro25481(int id) {
    Registro25481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
