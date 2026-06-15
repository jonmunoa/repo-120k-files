// fichero 45165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45165;

Registro45165 crear_registro45165(int id) {
    Registro45165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
