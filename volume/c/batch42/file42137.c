// fichero 42137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42137;

Registro42137 crear_registro42137(int id) {
    Registro42137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
