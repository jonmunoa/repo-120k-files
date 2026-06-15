// fichero 28605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28605;

Registro28605 crear_registro28605(int id) {
    Registro28605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
