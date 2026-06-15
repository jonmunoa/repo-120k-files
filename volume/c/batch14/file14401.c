// fichero 14401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14401;

Registro14401 crear_registro14401(int id) {
    Registro14401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
