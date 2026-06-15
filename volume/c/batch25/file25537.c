// fichero 25537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25537;

Registro25537 crear_registro25537(int id) {
    Registro25537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
