// fichero 36325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36325;

Registro36325 crear_registro36325(int id) {
    Registro36325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
