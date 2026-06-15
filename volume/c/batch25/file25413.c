// fichero 25413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25413;

Registro25413 crear_registro25413(int id) {
    Registro25413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
