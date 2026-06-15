// fichero 13509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13509;

Registro13509 crear_registro13509(int id) {
    Registro13509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
