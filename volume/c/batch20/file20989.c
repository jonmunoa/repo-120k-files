// fichero 20989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20989;

Registro20989 crear_registro20989(int id) {
    Registro20989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
