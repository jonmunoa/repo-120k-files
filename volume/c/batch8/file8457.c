// fichero 8457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8457;

Registro8457 crear_registro8457(int id) {
    Registro8457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
