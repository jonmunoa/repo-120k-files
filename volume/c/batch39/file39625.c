// fichero 39625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39625;

Registro39625 crear_registro39625(int id) {
    Registro39625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
