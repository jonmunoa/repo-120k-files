// fichero 17037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17037;

Registro17037 crear_registro17037(int id) {
    Registro17037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
