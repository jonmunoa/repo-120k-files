// fichero 22225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22225;

Registro22225 crear_registro22225(int id) {
    Registro22225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
