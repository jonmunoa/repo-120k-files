// fichero 10901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10901;

Registro10901 crear_registro10901(int id) {
    Registro10901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
