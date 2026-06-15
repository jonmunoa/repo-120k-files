// fichero 44189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44189;

Registro44189 crear_registro44189(int id) {
    Registro44189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
