// fichero 18825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18825;

Registro18825 crear_registro18825(int id) {
    Registro18825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
