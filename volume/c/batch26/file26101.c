// fichero 26101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26101;

Registro26101 crear_registro26101(int id) {
    Registro26101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
