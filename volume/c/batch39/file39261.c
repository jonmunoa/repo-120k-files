// fichero 39261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39261;

Registro39261 crear_registro39261(int id) {
    Registro39261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
