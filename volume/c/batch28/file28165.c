// fichero 28165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28165;

Registro28165 crear_registro28165(int id) {
    Registro28165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
