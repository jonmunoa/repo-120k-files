// fichero 4593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4593;

Registro4593 crear_registro4593(int id) {
    Registro4593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
