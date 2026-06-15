// fichero 42577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42577;

Registro42577 crear_registro42577(int id) {
    Registro42577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
