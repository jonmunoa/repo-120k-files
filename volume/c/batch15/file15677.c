// fichero 15677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15677;

Registro15677 crear_registro15677(int id) {
    Registro15677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
