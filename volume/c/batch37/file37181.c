// fichero 37181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37181;

Registro37181 crear_registro37181(int id) {
    Registro37181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
