// fichero 39121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39121;

Registro39121 crear_registro39121(int id) {
    Registro39121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
