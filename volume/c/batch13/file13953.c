// fichero 13953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13953;

Registro13953 crear_registro13953(int id) {
    Registro13953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
