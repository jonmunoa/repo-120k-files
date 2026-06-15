// fichero 17605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17605;

Registro17605 crear_registro17605(int id) {
    Registro17605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
