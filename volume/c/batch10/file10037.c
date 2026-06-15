// fichero 10037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10037;

Registro10037 crear_registro10037(int id) {
    Registro10037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
