// fichero 31505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31505;

Registro31505 crear_registro31505(int id) {
    Registro31505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
