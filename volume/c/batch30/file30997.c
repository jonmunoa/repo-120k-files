// fichero 30997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30997;

Registro30997 crear_registro30997(int id) {
    Registro30997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
