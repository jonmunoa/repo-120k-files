// fichero 15845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15845;

Registro15845 crear_registro15845(int id) {
    Registro15845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
