// fichero 25461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25461;

Registro25461 crear_registro25461(int id) {
    Registro25461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
