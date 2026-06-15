// fichero 10017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10017;

Registro10017 crear_registro10017(int id) {
    Registro10017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
