// fichero 38261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38261;

Registro38261 crear_registro38261(int id) {
    Registro38261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
