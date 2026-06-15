// fichero 909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro909;

Registro909 crear_registro909(int id) {
    Registro909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
