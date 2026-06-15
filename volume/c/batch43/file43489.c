// fichero 43489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43489;

Registro43489 crear_registro43489(int id) {
    Registro43489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
