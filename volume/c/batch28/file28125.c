// fichero 28125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28125;

Registro28125 crear_registro28125(int id) {
    Registro28125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
