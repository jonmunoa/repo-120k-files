// fichero 31845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31845;

Registro31845 crear_registro31845(int id) {
    Registro31845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
