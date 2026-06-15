// fichero 35609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35609;

Registro35609 crear_registro35609(int id) {
    Registro35609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
