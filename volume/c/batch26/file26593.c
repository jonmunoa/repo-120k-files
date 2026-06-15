// fichero 26593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26593;

Registro26593 crear_registro26593(int id) {
    Registro26593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
