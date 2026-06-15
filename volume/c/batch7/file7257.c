// fichero 7257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7257;

Registro7257 crear_registro7257(int id) {
    Registro7257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
