// fichero 38381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38381;

Registro38381 crear_registro38381(int id) {
    Registro38381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
