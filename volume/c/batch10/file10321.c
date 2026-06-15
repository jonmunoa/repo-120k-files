// fichero 10321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10321;

Registro10321 crear_registro10321(int id) {
    Registro10321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
