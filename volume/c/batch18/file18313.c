// fichero 18313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18313;

Registro18313 crear_registro18313(int id) {
    Registro18313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
