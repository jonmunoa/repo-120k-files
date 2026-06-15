// fichero 1457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1457;

Registro1457 crear_registro1457(int id) {
    Registro1457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
