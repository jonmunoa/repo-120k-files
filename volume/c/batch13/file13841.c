// fichero 13841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13841;

Registro13841 crear_registro13841(int id) {
    Registro13841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
