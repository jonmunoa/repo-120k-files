// fichero 32509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32509;

Registro32509 crear_registro32509(int id) {
    Registro32509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
