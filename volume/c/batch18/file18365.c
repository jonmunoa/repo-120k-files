// fichero 18365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18365;

Registro18365 crear_registro18365(int id) {
    Registro18365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
