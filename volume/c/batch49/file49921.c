// fichero 49921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49921;

Registro49921 crear_registro49921(int id) {
    Registro49921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
