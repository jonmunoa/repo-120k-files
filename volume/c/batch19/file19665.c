// fichero 19665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19665;

Registro19665 crear_registro19665(int id) {
    Registro19665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
