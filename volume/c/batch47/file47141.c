// fichero 47141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47141;

Registro47141 crear_registro47141(int id) {
    Registro47141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
