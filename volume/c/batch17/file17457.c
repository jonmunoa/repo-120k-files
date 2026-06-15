// fichero 17457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17457;

Registro17457 crear_registro17457(int id) {
    Registro17457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
