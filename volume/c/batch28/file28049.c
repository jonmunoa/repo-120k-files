// fichero 28049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28049;

Registro28049 crear_registro28049(int id) {
    Registro28049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
