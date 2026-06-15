// fichero 28197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28197;

Registro28197 crear_registro28197(int id) {
    Registro28197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
