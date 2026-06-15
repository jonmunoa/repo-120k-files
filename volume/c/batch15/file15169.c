// fichero 15169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15169;

Registro15169 crear_registro15169(int id) {
    Registro15169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
