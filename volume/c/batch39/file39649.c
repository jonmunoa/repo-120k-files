// fichero 39649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39649;

Registro39649 crear_registro39649(int id) {
    Registro39649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
