// fichero 13821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13821;

Registro13821 crear_registro13821(int id) {
    Registro13821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
