// fichero 37001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37001;

Registro37001 crear_registro37001(int id) {
    Registro37001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
