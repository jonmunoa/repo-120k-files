// fichero 15049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15049;

Registro15049 crear_registro15049(int id) {
    Registro15049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
