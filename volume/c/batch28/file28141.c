// fichero 28141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28141;

Registro28141 crear_registro28141(int id) {
    Registro28141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
