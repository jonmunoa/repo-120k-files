// fichero 28365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28365;

Registro28365 crear_registro28365(int id) {
    Registro28365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
