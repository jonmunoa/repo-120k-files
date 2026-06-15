// fichero 37129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37129;

Registro37129 crear_registro37129(int id) {
    Registro37129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
