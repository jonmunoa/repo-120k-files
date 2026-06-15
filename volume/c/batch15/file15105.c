// fichero 15105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15105;

Registro15105 crear_registro15105(int id) {
    Registro15105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
