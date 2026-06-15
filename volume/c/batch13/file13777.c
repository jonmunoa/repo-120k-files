// fichero 13777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13777;

Registro13777 crear_registro13777(int id) {
    Registro13777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
