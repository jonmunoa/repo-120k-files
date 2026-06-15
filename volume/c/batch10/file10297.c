// fichero 10297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10297;

Registro10297 crear_registro10297(int id) {
    Registro10297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
