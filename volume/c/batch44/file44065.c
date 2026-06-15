// fichero 44065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44065;

Registro44065 crear_registro44065(int id) {
    Registro44065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
