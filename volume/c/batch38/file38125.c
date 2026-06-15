// fichero 38125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38125;

Registro38125 crear_registro38125(int id) {
    Registro38125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
