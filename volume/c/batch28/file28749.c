// fichero 28749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28749;

Registro28749 crear_registro28749(int id) {
    Registro28749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
