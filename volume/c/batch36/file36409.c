// fichero 36409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36409;

Registro36409 crear_registro36409(int id) {
    Registro36409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
