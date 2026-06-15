// fichero 17281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17281;

Registro17281 crear_registro17281(int id) {
    Registro17281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
