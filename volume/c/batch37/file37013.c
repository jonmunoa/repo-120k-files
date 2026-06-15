// fichero 37013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37013;

Registro37013 crear_registro37013(int id) {
    Registro37013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
