// fichero 18081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18081;

Registro18081 crear_registro18081(int id) {
    Registro18081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
