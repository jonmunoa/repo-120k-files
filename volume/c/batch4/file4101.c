// fichero 4101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4101;

Registro4101 crear_registro4101(int id) {
    Registro4101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
