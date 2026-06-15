// fichero 10061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10061;

Registro10061 crear_registro10061(int id) {
    Registro10061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
