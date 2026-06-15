// fichero 4457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4457;

Registro4457 crear_registro4457(int id) {
    Registro4457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
