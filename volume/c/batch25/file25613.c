// fichero 25613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25613;

Registro25613 crear_registro25613(int id) {
    Registro25613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
