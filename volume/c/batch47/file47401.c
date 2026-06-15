// fichero 47401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47401;

Registro47401 crear_registro47401(int id) {
    Registro47401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
