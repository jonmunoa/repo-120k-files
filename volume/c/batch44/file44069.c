// fichero 44069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44069;

Registro44069 crear_registro44069(int id) {
    Registro44069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
