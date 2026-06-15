// fichero 10209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10209;

Registro10209 crear_registro10209(int id) {
    Registro10209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
