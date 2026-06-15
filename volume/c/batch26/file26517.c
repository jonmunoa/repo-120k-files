// fichero 26517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26517;

Registro26517 crear_registro26517(int id) {
    Registro26517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
