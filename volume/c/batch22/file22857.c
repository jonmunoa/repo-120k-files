// fichero 22857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22857;

Registro22857 crear_registro22857(int id) {
    Registro22857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
