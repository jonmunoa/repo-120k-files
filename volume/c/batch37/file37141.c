// fichero 37141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37141;

Registro37141 crear_registro37141(int id) {
    Registro37141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
