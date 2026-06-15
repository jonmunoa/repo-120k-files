// fichero 39381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39381;

Registro39381 crear_registro39381(int id) {
    Registro39381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
