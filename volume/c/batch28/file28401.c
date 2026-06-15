// fichero 28401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28401;

Registro28401 crear_registro28401(int id) {
    Registro28401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
