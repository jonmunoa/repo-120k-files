// fichero 38105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38105;

Registro38105 crear_registro38105(int id) {
    Registro38105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
