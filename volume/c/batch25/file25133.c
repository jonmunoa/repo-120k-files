// fichero 25133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25133;

Registro25133 crear_registro25133(int id) {
    Registro25133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
