// fichero 15365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15365;

Registro15365 crear_registro15365(int id) {
    Registro15365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
