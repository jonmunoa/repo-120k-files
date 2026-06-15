// fichero 39229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39229;

Registro39229 crear_registro39229(int id) {
    Registro39229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
