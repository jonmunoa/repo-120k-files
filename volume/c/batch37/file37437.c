// fichero 37437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37437;

Registro37437 crear_registro37437(int id) {
    Registro37437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
