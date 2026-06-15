// fichero 37521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37521;

Registro37521 crear_registro37521(int id) {
    Registro37521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
