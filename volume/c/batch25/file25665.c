// fichero 25665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25665;

Registro25665 crear_registro25665(int id) {
    Registro25665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
