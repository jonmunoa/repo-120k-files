// fichero 10421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10421;

Registro10421 crear_registro10421(int id) {
    Registro10421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
