// fichero 10761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10761;

Registro10761 crear_registro10761(int id) {
    Registro10761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
