// fichero 17749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17749;

Registro17749 crear_registro17749(int id) {
    Registro17749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
