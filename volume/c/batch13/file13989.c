// fichero 13989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13989;

Registro13989 crear_registro13989(int id) {
    Registro13989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
