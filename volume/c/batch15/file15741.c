// fichero 15741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15741;

Registro15741 crear_registro15741(int id) {
    Registro15741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
