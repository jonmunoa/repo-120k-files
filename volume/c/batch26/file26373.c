// fichero 26373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26373;

Registro26373 crear_registro26373(int id) {
    Registro26373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
