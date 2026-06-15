// fichero 28909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28909;

Registro28909 crear_registro28909(int id) {
    Registro28909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
