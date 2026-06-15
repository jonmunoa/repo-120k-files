// fichero 10805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10805;

Registro10805 crear_registro10805(int id) {
    Registro10805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
