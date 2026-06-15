// fichero 15429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15429;

Registro15429 crear_registro15429(int id) {
    Registro15429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
