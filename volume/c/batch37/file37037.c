// fichero 37037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37037;

Registro37037 crear_registro37037(int id) {
    Registro37037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
