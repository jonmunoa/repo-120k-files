// fichero 25457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25457;

Registro25457 crear_registro25457(int id) {
    Registro25457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
