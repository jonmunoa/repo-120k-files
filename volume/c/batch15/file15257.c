// fichero 15257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15257;

Registro15257 crear_registro15257(int id) {
    Registro15257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
