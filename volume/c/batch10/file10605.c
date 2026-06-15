// fichero 10605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10605;

Registro10605 crear_registro10605(int id) {
    Registro10605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
