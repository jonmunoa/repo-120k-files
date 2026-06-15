// fichero 26077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26077;

Registro26077 crear_registro26077(int id) {
    Registro26077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
