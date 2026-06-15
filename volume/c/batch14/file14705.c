// fichero 14705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14705;

Registro14705 crear_registro14705(int id) {
    Registro14705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
