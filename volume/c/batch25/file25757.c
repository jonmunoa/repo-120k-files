// fichero 25757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25757;

Registro25757 crear_registro25757(int id) {
    Registro25757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
