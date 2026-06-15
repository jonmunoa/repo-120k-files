// fichero 37121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37121;

Registro37121 crear_registro37121(int id) {
    Registro37121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
