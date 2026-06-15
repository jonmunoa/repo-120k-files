// fichero 13493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13493;

Registro13493 crear_registro13493(int id) {
    Registro13493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
