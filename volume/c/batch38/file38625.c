// fichero 38625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38625;

Registro38625 crear_registro38625(int id) {
    Registro38625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
