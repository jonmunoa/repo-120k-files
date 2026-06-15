// fichero 31113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31113;

Registro31113 crear_registro31113(int id) {
    Registro31113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
