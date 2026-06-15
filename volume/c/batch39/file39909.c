// fichero 39909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39909;

Registro39909 crear_registro39909(int id) {
    Registro39909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
