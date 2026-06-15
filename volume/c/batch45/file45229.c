// fichero 45229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45229;

Registro45229 crear_registro45229(int id) {
    Registro45229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
