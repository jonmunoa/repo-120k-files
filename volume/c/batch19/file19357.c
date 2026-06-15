// fichero 19357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19357;

Registro19357 crear_registro19357(int id) {
    Registro19357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
