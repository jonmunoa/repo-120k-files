// fichero 48609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48609;

Registro48609 crear_registro48609(int id) {
    Registro48609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
