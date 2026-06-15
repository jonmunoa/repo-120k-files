// fichero 18013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18013;

Registro18013 crear_registro18013(int id) {
    Registro18013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
