// fichero 28477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28477;

Registro28477 crear_registro28477(int id) {
    Registro28477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
