// fichero 25673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25673;

Registro25673 crear_registro25673(int id) {
    Registro25673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
