// fichero 39225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39225;

Registro39225 crear_registro39225(int id) {
    Registro39225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
