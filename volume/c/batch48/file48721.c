// fichero 48721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48721;

Registro48721 crear_registro48721(int id) {
    Registro48721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
