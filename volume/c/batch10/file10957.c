// fichero 10957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10957;

Registro10957 crear_registro10957(int id) {
    Registro10957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
