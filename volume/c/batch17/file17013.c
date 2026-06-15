// fichero 17013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17013;

Registro17013 crear_registro17013(int id) {
    Registro17013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
