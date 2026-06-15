// fichero 17401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17401;

Registro17401 crear_registro17401(int id) {
    Registro17401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
