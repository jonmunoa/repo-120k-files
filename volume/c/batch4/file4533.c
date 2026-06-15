// fichero 4533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4533;

Registro4533 crear_registro4533(int id) {
    Registro4533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
