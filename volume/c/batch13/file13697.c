// fichero 13697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13697;

Registro13697 crear_registro13697(int id) {
    Registro13697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
