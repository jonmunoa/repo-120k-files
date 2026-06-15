// fichero 37133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37133;

Registro37133 crear_registro37133(int id) {
    Registro37133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
