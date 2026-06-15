// fichero 18453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18453;

Registro18453 crear_registro18453(int id) {
    Registro18453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
