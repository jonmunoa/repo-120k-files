// fichero 10373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10373;

Registro10373 crear_registro10373(int id) {
    Registro10373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
