// fichero 19017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19017;

Registro19017 crear_registro19017(int id) {
    Registro19017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
