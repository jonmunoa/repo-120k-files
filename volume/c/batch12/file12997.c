// fichero 12997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12997;

Registro12997 crear_registro12997(int id) {
    Registro12997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
