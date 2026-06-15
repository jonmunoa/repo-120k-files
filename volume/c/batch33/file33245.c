// fichero 33245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33245;

Registro33245 crear_registro33245(int id) {
    Registro33245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
