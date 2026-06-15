// fichero 31381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31381;

Registro31381 crear_registro31381(int id) {
    Registro31381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
