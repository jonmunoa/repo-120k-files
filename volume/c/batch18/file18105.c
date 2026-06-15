// fichero 18105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18105;

Registro18105 crear_registro18105(int id) {
    Registro18105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
