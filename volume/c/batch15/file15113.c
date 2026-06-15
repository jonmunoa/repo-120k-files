// fichero 15113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15113;

Registro15113 crear_registro15113(int id) {
    Registro15113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
