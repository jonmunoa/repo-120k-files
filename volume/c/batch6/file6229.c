// fichero 6229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6229;

Registro6229 crear_registro6229(int id) {
    Registro6229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
