// fichero 37393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37393;

Registro37393 crear_registro37393(int id) {
    Registro37393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
