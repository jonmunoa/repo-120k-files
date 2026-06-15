// fichero 37969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37969;

Registro37969 crear_registro37969(int id) {
    Registro37969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
