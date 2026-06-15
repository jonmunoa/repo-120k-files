// fichero 29809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29809;

Registro29809 crear_registro29809(int id) {
    Registro29809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
