// fichero 19141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19141;

Registro19141 crear_registro19141(int id) {
    Registro19141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
