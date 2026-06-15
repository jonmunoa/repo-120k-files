// fichero 18037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18037;

Registro18037 crear_registro18037(int id) {
    Registro18037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
