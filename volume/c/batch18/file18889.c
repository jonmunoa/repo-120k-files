// fichero 18889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18889;

Registro18889 crear_registro18889(int id) {
    Registro18889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
