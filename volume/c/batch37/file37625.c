// fichero 37625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37625;

Registro37625 crear_registro37625(int id) {
    Registro37625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
