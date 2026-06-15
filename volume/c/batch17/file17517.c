// fichero 17517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17517;

Registro17517 crear_registro17517(int id) {
    Registro17517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
