// fichero 4705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4705;

Registro4705 crear_registro4705(int id) {
    Registro4705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
