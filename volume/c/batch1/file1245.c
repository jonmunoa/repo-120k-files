// fichero 1245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1245;

Registro1245 crear_registro1245(int id) {
    Registro1245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
