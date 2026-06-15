// fichero 31625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31625;

Registro31625 crear_registro31625(int id) {
    Registro31625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
