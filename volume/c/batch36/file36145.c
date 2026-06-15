// fichero 36145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36145;

Registro36145 crear_registro36145(int id) {
    Registro36145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
