// fichero 46409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46409;

Registro46409 crear_registro46409(int id) {
    Registro46409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
