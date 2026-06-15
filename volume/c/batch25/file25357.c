// fichero 25357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25357;

Registro25357 crear_registro25357(int id) {
    Registro25357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
