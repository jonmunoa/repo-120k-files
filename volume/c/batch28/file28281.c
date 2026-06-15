// fichero 28281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28281;

Registro28281 crear_registro28281(int id) {
    Registro28281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
