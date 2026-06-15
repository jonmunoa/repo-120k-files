// fichero 25729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25729;

Registro25729 crear_registro25729(int id) {
    Registro25729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
