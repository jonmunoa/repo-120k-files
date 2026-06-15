// fichero 48669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48669;

Registro48669 crear_registro48669(int id) {
    Registro48669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
