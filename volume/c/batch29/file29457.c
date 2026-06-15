// fichero 29457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29457;

Registro29457 crear_registro29457(int id) {
    Registro29457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
