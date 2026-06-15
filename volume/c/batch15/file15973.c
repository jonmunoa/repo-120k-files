// fichero 15973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15973;

Registro15973 crear_registro15973(int id) {
    Registro15973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
