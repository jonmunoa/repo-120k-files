// fichero 15853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15853;

Registro15853 crear_registro15853(int id) {
    Registro15853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
