// fichero 17409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17409;

Registro17409 crear_registro17409(int id) {
    Registro17409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
