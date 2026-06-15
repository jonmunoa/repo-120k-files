// fichero 22329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22329;

Registro22329 crear_registro22329(int id) {
    Registro22329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
