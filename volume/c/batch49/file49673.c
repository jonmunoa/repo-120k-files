// fichero 49673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49673;

Registro49673 crear_registro49673(int id) {
    Registro49673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
