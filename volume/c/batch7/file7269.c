// fichero 7269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7269;

Registro7269 crear_registro7269(int id) {
    Registro7269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
