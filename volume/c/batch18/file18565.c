// fichero 18565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18565;

Registro18565 crear_registro18565(int id) {
    Registro18565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
