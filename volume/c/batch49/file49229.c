// fichero 49229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49229;

Registro49229 crear_registro49229(int id) {
    Registro49229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
