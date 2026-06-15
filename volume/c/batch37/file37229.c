// fichero 37229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37229;

Registro37229 crear_registro37229(int id) {
    Registro37229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
