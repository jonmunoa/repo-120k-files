// fichero 25485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25485;

Registro25485 crear_registro25485(int id) {
    Registro25485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
