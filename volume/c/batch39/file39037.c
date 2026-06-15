// fichero 39037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39037;

Registro39037 crear_registro39037(int id) {
    Registro39037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
