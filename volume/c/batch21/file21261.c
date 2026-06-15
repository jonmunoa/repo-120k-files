// fichero 21261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21261;

Registro21261 crear_registro21261(int id) {
    Registro21261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
