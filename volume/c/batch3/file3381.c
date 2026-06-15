// fichero 3381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3381;

Registro3381 crear_registro3381(int id) {
    Registro3381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
