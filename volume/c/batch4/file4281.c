// fichero 4281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4281;

Registro4281 crear_registro4281(int id) {
    Registro4281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
