// fichero 37289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37289;

Registro37289 crear_registro37289(int id) {
    Registro37289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
