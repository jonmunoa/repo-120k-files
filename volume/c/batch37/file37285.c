// fichero 37285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37285;

Registro37285 crear_registro37285(int id) {
    Registro37285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
