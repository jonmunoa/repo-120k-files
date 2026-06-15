// fichero 4237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4237;

Registro4237 crear_registro4237(int id) {
    Registro4237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
