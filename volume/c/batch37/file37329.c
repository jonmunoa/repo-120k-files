// fichero 37329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37329;

Registro37329 crear_registro37329(int id) {
    Registro37329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
