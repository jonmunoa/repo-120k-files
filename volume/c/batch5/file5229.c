// fichero 5229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5229;

Registro5229 crear_registro5229(int id) {
    Registro5229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
