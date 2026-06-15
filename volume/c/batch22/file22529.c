// fichero 22529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22529;

Registro22529 crear_registro22529(int id) {
    Registro22529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
