// fichero 18673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18673;

Registro18673 crear_registro18673(int id) {
    Registro18673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
