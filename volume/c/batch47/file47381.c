// fichero 47381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47381;

Registro47381 crear_registro47381(int id) {
    Registro47381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
