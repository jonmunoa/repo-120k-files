// fichero 15689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15689;

Registro15689 crear_registro15689(int id) {
    Registro15689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
