// fichero 14833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14833;

Registro14833 crear_registro14833(int id) {
    Registro14833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
