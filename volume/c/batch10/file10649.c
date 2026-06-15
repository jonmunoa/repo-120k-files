// fichero 10649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10649;

Registro10649 crear_registro10649(int id) {
    Registro10649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
