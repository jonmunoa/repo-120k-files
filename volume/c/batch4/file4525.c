// fichero 4525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4525;

Registro4525 crear_registro4525(int id) {
    Registro4525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
