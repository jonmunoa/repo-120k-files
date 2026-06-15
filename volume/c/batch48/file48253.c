// fichero 48253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48253;

Registro48253 crear_registro48253(int id) {
    Registro48253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
