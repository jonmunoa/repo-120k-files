// fichero 31825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31825;

Registro31825 crear_registro31825(int id) {
    Registro31825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
