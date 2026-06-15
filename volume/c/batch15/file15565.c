// fichero 15565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15565;

Registro15565 crear_registro15565(int id) {
    Registro15565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
