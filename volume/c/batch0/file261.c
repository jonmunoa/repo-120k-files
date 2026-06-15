// fichero 261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro261;

Registro261 crear_registro261(int id) {
    Registro261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
