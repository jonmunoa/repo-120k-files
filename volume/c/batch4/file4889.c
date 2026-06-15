// fichero 4889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4889;

Registro4889 crear_registro4889(int id) {
    Registro4889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
