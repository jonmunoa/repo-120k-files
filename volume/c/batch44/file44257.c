// fichero 44257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44257;

Registro44257 crear_registro44257(int id) {
    Registro44257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
