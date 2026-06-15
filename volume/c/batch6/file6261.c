// fichero 6261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6261;

Registro6261 crear_registro6261(int id) {
    Registro6261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
