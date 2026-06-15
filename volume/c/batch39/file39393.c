// fichero 39393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39393;

Registro39393 crear_registro39393(int id) {
    Registro39393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
