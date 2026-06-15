// fichero 19329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19329;

Registro19329 crear_registro19329(int id) {
    Registro19329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
