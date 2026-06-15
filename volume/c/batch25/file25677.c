// fichero 25677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25677;

Registro25677 crear_registro25677(int id) {
    Registro25677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
