// fichero 4609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4609;

Registro4609 crear_registro4609(int id) {
    Registro4609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
