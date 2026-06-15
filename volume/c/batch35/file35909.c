// fichero 35909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35909;

Registro35909 crear_registro35909(int id) {
    Registro35909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
