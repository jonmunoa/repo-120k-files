// fichero 37885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37885;

Registro37885 crear_registro37885(int id) {
    Registro37885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
