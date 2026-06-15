// fichero 13505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13505;

Registro13505 crear_registro13505(int id) {
    Registro13505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
