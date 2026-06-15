// fichero 10129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10129;

Registro10129 crear_registro10129(int id) {
    Registro10129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
