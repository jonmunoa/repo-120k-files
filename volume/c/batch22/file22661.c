// fichero 22661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22661;

Registro22661 crear_registro22661(int id) {
    Registro22661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
