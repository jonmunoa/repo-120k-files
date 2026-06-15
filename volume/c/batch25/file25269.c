// fichero 25269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25269;

Registro25269 crear_registro25269(int id) {
    Registro25269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
