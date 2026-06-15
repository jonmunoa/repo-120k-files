// fichero 10393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10393;

Registro10393 crear_registro10393(int id) {
    Registro10393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
