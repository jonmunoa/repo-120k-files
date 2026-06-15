// fichero 45209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45209;

Registro45209 crear_registro45209(int id) {
    Registro45209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
