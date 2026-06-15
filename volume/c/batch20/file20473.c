// fichero 20473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20473;

Registro20473 crear_registro20473(int id) {
    Registro20473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
