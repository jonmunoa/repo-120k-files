// fichero 14381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14381;

Registro14381 crear_registro14381(int id) {
    Registro14381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
