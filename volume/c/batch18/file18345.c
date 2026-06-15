// fichero 18345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18345;

Registro18345 crear_registro18345(int id) {
    Registro18345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
