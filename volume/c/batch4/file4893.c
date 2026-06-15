// fichero 4893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4893;

Registro4893 crear_registro4893(int id) {
    Registro4893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
