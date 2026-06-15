// fichero 22581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22581;

Registro22581 crear_registro22581(int id) {
    Registro22581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
