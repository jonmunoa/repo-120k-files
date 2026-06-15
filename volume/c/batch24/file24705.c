// fichero 24705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24705;

Registro24705 crear_registro24705(int id) {
    Registro24705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
