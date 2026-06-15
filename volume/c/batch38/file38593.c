// fichero 38593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38593;

Registro38593 crear_registro38593(int id) {
    Registro38593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
