// fichero 15265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15265;

Registro15265 crear_registro15265(int id) {
    Registro15265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
