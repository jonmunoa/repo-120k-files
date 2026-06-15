// fichero 42933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42933;

Registro42933 crear_registro42933(int id) {
    Registro42933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
