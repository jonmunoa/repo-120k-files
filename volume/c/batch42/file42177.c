// fichero 42177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42177;

Registro42177 crear_registro42177(int id) {
    Registro42177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
