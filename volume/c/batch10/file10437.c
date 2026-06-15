// fichero 10437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10437;

Registro10437 crear_registro10437(int id) {
    Registro10437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
