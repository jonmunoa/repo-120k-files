// fichero 4489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4489;

Registro4489 crear_registro4489(int id) {
    Registro4489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
