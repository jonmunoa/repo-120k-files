// fichero 15145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15145;

Registro15145 crear_registro15145(int id) {
    Registro15145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
