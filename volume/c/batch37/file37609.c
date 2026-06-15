// fichero 37609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37609;

Registro37609 crear_registro37609(int id) {
    Registro37609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
