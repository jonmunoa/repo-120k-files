// fichero 1833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1833;

Registro1833 crear_registro1833(int id) {
    Registro1833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
