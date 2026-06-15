// fichero 42581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42581;

Registro42581 crear_registro42581(int id) {
    Registro42581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
