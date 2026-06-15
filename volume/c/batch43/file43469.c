// fichero 43469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43469;

Registro43469 crear_registro43469(int id) {
    Registro43469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
