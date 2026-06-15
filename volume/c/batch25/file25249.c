// fichero 25249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25249;

Registro25249 crear_registro25249(int id) {
    Registro25249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
