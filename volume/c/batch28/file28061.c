// fichero 28061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28061;

Registro28061 crear_registro28061(int id) {
    Registro28061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
