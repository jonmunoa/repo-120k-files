// fichero 15509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15509;

Registro15509 crear_registro15509(int id) {
    Registro15509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
