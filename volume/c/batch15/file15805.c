// fichero 15805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15805;

Registro15805 crear_registro15805(int id) {
    Registro15805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
