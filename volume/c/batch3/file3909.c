// fichero 3909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3909;

Registro3909 crear_registro3909(int id) {
    Registro3909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
