// fichero 38609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38609;

Registro38609 crear_registro38609(int id) {
    Registro38609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
