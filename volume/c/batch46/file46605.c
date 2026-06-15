// fichero 46605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46605;

Registro46605 crear_registro46605(int id) {
    Registro46605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
