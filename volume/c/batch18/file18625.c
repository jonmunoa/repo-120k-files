// fichero 18625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18625;

Registro18625 crear_registro18625(int id) {
    Registro18625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
