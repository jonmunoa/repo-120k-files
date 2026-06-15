// fichero 43145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43145;

Registro43145 crear_registro43145(int id) {
    Registro43145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
