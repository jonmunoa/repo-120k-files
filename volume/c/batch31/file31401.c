// fichero 31401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31401;

Registro31401 crear_registro31401(int id) {
    Registro31401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
