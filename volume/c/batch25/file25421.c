// fichero 25421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25421;

Registro25421 crear_registro25421(int id) {
    Registro25421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
