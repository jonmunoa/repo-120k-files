// fichero 37293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37293;

Registro37293 crear_registro37293(int id) {
    Registro37293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
