// fichero 10885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10885;

Registro10885 crear_registro10885(int id) {
    Registro10885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
