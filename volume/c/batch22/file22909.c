// fichero 22909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22909;

Registro22909 crear_registro22909(int id) {
    Registro22909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
