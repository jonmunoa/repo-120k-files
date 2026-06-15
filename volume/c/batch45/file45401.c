// fichero 45401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45401;

Registro45401 crear_registro45401(int id) {
    Registro45401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
