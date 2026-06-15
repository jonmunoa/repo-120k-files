// fichero 35141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35141;

Registro35141 crear_registro35141(int id) {
    Registro35141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
