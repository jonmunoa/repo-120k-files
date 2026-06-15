// fichero 15609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15609;

Registro15609 crear_registro15609(int id) {
    Registro15609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
