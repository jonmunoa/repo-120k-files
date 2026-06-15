// fichero 8329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8329;

Registro8329 crear_registro8329(int id) {
    Registro8329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
