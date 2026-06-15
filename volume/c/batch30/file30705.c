// fichero 30705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30705;

Registro30705 crear_registro30705(int id) {
    Registro30705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
