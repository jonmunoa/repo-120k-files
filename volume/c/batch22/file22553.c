// fichero 22553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22553;

Registro22553 crear_registro22553(int id) {
    Registro22553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
