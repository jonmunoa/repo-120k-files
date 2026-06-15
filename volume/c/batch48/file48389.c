// fichero 48389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48389;

Registro48389 crear_registro48389(int id) {
    Registro48389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
