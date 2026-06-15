// fichero 39705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39705;

Registro39705 crear_registro39705(int id) {
    Registro39705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
