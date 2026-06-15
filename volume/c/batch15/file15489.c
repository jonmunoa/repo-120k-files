// fichero 15489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15489;

Registro15489 crear_registro15489(int id) {
    Registro15489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
