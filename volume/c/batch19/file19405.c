// fichero 19405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19405;

Registro19405 crear_registro19405(int id) {
    Registro19405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
