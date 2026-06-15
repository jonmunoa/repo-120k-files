// fichero 10101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10101;

Registro10101 crear_registro10101(int id) {
    Registro10101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
