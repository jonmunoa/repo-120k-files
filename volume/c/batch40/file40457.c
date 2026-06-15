// fichero 40457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40457;

Registro40457 crear_registro40457(int id) {
    Registro40457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
