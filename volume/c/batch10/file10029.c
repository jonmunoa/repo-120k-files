// fichero 10029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10029;

Registro10029 crear_registro10029(int id) {
    Registro10029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
