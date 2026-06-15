// fichero 46721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46721;

Registro46721 crear_registro46721(int id) {
    Registro46721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
