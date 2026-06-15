// fichero 49973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49973;

Registro49973 crear_registro49973(int id) {
    Registro49973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
