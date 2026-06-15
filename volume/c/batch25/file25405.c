// fichero 25405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25405;

Registro25405 crear_registro25405(int id) {
    Registro25405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
