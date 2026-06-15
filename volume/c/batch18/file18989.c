// fichero 18989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18989;

Registro18989 crear_registro18989(int id) {
    Registro18989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
