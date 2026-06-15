// fichero 17421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17421;

Registro17421 crear_registro17421(int id) {
    Registro17421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
