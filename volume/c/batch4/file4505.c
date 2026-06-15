// fichero 4505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4505;

Registro4505 crear_registro4505(int id) {
    Registro4505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
