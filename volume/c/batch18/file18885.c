// fichero 18885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18885;

Registro18885 crear_registro18885(int id) {
    Registro18885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
