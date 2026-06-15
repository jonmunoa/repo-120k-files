// fichero 25833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25833;

Registro25833 crear_registro25833(int id) {
    Registro25833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
