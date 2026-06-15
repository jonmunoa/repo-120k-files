// fichero 37765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37765;

Registro37765 crear_registro37765(int id) {
    Registro37765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
