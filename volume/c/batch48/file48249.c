// fichero 48249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48249;

Registro48249 crear_registro48249(int id) {
    Registro48249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
