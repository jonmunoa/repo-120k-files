// fichero 29261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29261;

Registro29261 crear_registro29261(int id) {
    Registro29261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
