// fichero 10377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10377;

Registro10377 crear_registro10377(int id) {
    Registro10377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
