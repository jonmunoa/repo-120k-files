// fichero 13621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13621;

Registro13621 crear_registro13621(int id) {
    Registro13621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
