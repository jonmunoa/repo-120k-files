// fichero 36705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36705;

Registro36705 crear_registro36705(int id) {
    Registro36705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
