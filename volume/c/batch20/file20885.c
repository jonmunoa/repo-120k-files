// fichero 20885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20885;

Registro20885 crear_registro20885(int id) {
    Registro20885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
