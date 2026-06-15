// fichero 44329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44329;

Registro44329 crear_registro44329(int id) {
    Registro44329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
