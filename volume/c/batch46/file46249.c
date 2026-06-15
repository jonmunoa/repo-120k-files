// fichero 46249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46249;

Registro46249 crear_registro46249(int id) {
    Registro46249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
