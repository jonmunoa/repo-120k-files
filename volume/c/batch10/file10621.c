// fichero 10621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10621;

Registro10621 crear_registro10621(int id) {
    Registro10621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
