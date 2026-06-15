// fichero 3673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3673;

Registro3673 crear_registro3673(int id) {
    Registro3673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
