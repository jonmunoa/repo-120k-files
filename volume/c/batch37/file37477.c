// fichero 37477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37477;

Registro37477 crear_registro37477(int id) {
    Registro37477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
