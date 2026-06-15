// fichero 42017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42017;

Registro42017 crear_registro42017(int id) {
    Registro42017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
