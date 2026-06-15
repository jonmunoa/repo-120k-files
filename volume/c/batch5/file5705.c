// fichero 5705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5705;

Registro5705 crear_registro5705(int id) {
    Registro5705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
