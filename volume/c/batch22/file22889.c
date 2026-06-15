// fichero 22889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22889;

Registro22889 crear_registro22889(int id) {
    Registro22889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
