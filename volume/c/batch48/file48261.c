// fichero 48261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48261;

Registro48261 crear_registro48261(int id) {
    Registro48261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
