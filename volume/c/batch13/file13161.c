// fichero 13161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13161;

Registro13161 crear_registro13161(int id) {
    Registro13161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
