// fichero 26705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26705;

Registro26705 crear_registro26705(int id) {
    Registro26705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
