// fichero 44473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44473;

Registro44473 crear_registro44473(int id) {
    Registro44473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
