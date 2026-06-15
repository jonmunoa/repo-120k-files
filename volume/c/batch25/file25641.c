// fichero 25641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25641;

Registro25641 crear_registro25641(int id) {
    Registro25641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
