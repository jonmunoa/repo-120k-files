// fichero 1229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1229;

Registro1229 crear_registro1229(int id) {
    Registro1229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
