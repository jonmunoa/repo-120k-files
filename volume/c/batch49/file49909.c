// fichero 49909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49909;

Registro49909 crear_registro49909(int id) {
    Registro49909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
