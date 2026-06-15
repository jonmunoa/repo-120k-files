// fichero 42477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42477;

Registro42477 crear_registro42477(int id) {
    Registro42477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
