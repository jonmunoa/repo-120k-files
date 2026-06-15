// fichero 10529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10529;

Registro10529 crear_registro10529(int id) {
    Registro10529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
