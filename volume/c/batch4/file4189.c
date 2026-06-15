// fichero 4189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4189;

Registro4189 crear_registro4189(int id) {
    Registro4189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
