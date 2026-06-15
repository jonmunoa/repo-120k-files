// fichero 37397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37397;

Registro37397 crear_registro37397(int id) {
    Registro37397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
