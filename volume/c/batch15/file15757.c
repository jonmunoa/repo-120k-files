// fichero 15757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15757;

Registro15757 crear_registro15757(int id) {
    Registro15757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
