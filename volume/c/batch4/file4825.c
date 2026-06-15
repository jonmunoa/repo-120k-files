// fichero 4825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4825;

Registro4825 crear_registro4825(int id) {
    Registro4825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
