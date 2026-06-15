// fichero 30381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30381;

Registro30381 crear_registro30381(int id) {
    Registro30381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
