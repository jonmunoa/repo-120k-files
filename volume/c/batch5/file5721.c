// fichero 5721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5721;

Registro5721 crear_registro5721(int id) {
    Registro5721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
