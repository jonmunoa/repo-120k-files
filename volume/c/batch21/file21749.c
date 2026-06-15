// fichero 21749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21749;

Registro21749 crear_registro21749(int id) {
    Registro21749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
