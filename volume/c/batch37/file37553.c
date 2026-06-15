// fichero 37553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37553;

Registro37553 crear_registro37553(int id) {
    Registro37553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
