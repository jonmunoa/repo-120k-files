// fichero 22801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22801;

Registro22801 crear_registro22801(int id) {
    Registro22801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
