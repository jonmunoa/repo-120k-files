// fichero 10557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10557;

Registro10557 crear_registro10557(int id) {
    Registro10557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
