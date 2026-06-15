// fichero 13801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13801;

Registro13801 crear_registro13801(int id) {
    Registro13801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
