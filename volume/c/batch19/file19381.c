// fichero 19381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19381;

Registro19381 crear_registro19381(int id) {
    Registro19381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
