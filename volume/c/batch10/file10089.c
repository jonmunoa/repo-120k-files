// fichero 10089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10089;

Registro10089 crear_registro10089(int id) {
    Registro10089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
