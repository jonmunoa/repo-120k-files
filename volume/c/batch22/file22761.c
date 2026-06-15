// fichero 22761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22761;

Registro22761 crear_registro22761(int id) {
    Registro22761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
