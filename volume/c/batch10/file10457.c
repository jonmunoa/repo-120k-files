// fichero 10457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10457;

Registro10457 crear_registro10457(int id) {
    Registro10457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
