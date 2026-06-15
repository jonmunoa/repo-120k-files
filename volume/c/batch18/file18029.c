// fichero 18029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18029;

Registro18029 crear_registro18029(int id) {
    Registro18029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
