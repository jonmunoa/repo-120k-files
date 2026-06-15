// fichero 17225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17225;

Registro17225 crear_registro17225(int id) {
    Registro17225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
