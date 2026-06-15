// fichero 17001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17001;

Registro17001 crear_registro17001(int id) {
    Registro17001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
