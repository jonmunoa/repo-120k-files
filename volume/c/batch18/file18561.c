// fichero 18561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18561;

Registro18561 crear_registro18561(int id) {
    Registro18561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
