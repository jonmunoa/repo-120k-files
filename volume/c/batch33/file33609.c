// fichero 33609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33609;

Registro33609 crear_registro33609(int id) {
    Registro33609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
