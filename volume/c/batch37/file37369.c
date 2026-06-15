// fichero 37369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37369;

Registro37369 crear_registro37369(int id) {
    Registro37369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
