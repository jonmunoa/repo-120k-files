// fichero 10965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10965;

Registro10965 crear_registro10965(int id) {
    Registro10965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
