// fichero 14749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14749;

Registro14749 crear_registro14749(int id) {
    Registro14749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
