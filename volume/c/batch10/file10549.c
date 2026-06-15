// fichero 10549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10549;

Registro10549 crear_registro10549(int id) {
    Registro10549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
