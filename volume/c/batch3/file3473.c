// fichero 3473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3473;

Registro3473 crear_registro3473(int id) {
    Registro3473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
