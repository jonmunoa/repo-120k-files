// fichero 36381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36381;

Registro36381 crear_registro36381(int id) {
    Registro36381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
