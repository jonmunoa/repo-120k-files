// fichero 34909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34909;

Registro34909 crear_registro34909(int id) {
    Registro34909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
