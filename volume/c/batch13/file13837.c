// fichero 13837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13837;

Registro13837 crear_registro13837(int id) {
    Registro13837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
