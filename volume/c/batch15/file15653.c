// fichero 15653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15653;

Registro15653 crear_registro15653(int id) {
    Registro15653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
