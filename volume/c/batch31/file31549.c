// fichero 31549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31549;

Registro31549 crear_registro31549(int id) {
    Registro31549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
