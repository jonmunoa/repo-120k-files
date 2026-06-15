// fichero 17469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17469;

Registro17469 crear_registro17469(int id) {
    Registro17469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
