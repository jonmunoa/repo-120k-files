// fichero 42985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42985;

Registro42985 crear_registro42985(int id) {
    Registro42985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
