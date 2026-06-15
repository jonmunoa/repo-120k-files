// fichero 47245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47245;

Registro47245 crear_registro47245(int id) {
    Registro47245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
