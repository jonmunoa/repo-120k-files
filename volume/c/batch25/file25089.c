// fichero 25089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25089;

Registro25089 crear_registro25089(int id) {
    Registro25089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
