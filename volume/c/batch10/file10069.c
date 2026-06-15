// fichero 10069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10069;

Registro10069 crear_registro10069(int id) {
    Registro10069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
