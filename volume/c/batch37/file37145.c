// fichero 37145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37145;

Registro37145 crear_registro37145(int id) {
    Registro37145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
