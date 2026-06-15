// fichero 28989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28989;

Registro28989 crear_registro28989(int id) {
    Registro28989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
