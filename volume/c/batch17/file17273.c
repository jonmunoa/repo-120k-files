// fichero 17273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17273;

Registro17273 crear_registro17273(int id) {
    Registro17273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
