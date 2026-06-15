// fichero 38453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38453;

Registro38453 crear_registro38453(int id) {
    Registro38453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
