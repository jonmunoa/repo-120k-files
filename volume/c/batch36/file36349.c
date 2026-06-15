// fichero 36349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36349;

Registro36349 crear_registro36349(int id) {
    Registro36349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
