// fichero 32101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32101;

Registro32101 crear_registro32101(int id) {
    Registro32101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
