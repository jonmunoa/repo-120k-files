// fichero 31005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31005;

Registro31005 crear_registro31005(int id) {
    Registro31005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
