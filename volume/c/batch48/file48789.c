// fichero 48789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48789;

Registro48789 crear_registro48789(int id) {
    Registro48789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
