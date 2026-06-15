// fichero 28565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28565;

Registro28565 crear_registro28565(int id) {
    Registro28565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
