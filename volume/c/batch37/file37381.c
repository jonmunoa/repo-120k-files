// fichero 37381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37381;

Registro37381 crear_registro37381(int id) {
    Registro37381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
