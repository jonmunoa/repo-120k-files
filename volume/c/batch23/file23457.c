// fichero 23457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23457;

Registro23457 crear_registro23457(int id) {
    Registro23457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
