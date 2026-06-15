// fichero 10525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10525;

Registro10525 crear_registro10525(int id) {
    Registro10525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
