// fichero 10233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10233;

Registro10233 crear_registro10233(int id) {
    Registro10233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
