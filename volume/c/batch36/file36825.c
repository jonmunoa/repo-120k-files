// fichero 36825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36825;

Registro36825 crear_registro36825(int id) {
    Registro36825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
