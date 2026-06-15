// fichero 12385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12385;

Registro12385 crear_registro12385(int id) {
    Registro12385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
