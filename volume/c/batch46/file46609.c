// fichero 46609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46609;

Registro46609 crear_registro46609(int id) {
    Registro46609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
