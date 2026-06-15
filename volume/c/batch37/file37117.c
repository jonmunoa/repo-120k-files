// fichero 37117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37117;

Registro37117 crear_registro37117(int id) {
    Registro37117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
