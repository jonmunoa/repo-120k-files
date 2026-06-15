// fichero 6825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6825;

Registro6825 crear_registro6825(int id) {
    Registro6825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
