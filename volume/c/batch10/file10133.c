// fichero 10133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10133;

Registro10133 crear_registro10133(int id) {
    Registro10133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
