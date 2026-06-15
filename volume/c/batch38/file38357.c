// fichero 38357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38357;

Registro38357 crear_registro38357(int id) {
    Registro38357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
