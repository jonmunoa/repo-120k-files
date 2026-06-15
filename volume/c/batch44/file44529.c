// fichero 44529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44529;

Registro44529 crear_registro44529(int id) {
    Registro44529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
