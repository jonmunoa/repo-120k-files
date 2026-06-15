// fichero 10237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10237;

Registro10237 crear_registro10237(int id) {
    Registro10237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
