// fichero 20365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20365;

Registro20365 crear_registro20365(int id) {
    Registro20365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
