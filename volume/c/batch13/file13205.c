// fichero 13205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13205;

Registro13205 crear_registro13205(int id) {
    Registro13205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
