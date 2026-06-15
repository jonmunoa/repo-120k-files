// fichero 15929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15929;

Registro15929 crear_registro15929(int id) {
    Registro15929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
