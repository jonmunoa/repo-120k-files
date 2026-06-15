// fichero 3709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3709;

Registro3709 crear_registro3709(int id) {
    Registro3709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
