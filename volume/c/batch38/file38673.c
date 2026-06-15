// fichero 38673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38673;

Registro38673 crear_registro38673(int id) {
    Registro38673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
