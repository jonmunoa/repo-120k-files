// fichero 46401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46401;

Registro46401 crear_registro46401(int id) {
    Registro46401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
