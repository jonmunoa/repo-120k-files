// fichero 31289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31289;

Registro31289 crear_registro31289(int id) {
    Registro31289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
