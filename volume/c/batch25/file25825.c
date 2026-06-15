// fichero 25825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25825;

Registro25825 crear_registro25825(int id) {
    Registro25825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
