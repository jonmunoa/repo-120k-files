// fichero 3581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3581;

Registro3581 crear_registro3581(int id) {
    Registro3581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
