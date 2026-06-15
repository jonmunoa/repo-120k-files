// fichero 10729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10729;

Registro10729 crear_registro10729(int id) {
    Registro10729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
