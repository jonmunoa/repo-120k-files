// fichero 15465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15465;

Registro15465 crear_registro15465(int id) {
    Registro15465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
