// fichero 10145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10145;

Registro10145 crear_registro10145(int id) {
    Registro10145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
