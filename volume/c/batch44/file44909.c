// fichero 44909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44909;

Registro44909 crear_registro44909(int id) {
    Registro44909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
