// fichero 10581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10581;

Registro10581 crear_registro10581(int id) {
    Registro10581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
