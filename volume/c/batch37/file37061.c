// fichero 37061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37061;

Registro37061 crear_registro37061(int id) {
    Registro37061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
