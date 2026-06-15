// fichero 15881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15881;

Registro15881 crear_registro15881(int id) {
    Registro15881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
