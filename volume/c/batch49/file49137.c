// fichero 49137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49137;

Registro49137 crear_registro49137(int id) {
    Registro49137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
