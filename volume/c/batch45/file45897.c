// fichero 45897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45897;

Registro45897 crear_registro45897(int id) {
    Registro45897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
