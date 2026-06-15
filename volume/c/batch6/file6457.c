// fichero 6457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6457;

Registro6457 crear_registro6457(int id) {
    Registro6457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
