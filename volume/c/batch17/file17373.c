// fichero 17373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17373;

Registro17373 crear_registro17373(int id) {
    Registro17373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
