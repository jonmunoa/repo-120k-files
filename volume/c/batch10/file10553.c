// fichero 10553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10553;

Registro10553 crear_registro10553(int id) {
    Registro10553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
