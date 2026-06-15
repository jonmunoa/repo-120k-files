// fichero 43869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43869;

Registro43869 crear_registro43869(int id) {
    Registro43869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
