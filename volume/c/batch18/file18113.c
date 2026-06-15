// fichero 18113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18113;

Registro18113 crear_registro18113(int id) {
    Registro18113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
