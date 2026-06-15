// fichero 16229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16229;

Registro16229 crear_registro16229(int id) {
    Registro16229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
