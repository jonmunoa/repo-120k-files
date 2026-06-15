// fichero 25601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25601;

Registro25601 crear_registro25601(int id) {
    Registro25601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
