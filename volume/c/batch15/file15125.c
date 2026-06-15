// fichero 15125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15125;

Registro15125 crear_registro15125(int id) {
    Registro15125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
