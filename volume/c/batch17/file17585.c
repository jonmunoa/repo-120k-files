// fichero 17585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17585;

Registro17585 crear_registro17585(int id) {
    Registro17585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
