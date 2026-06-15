// fichero 17313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17313;

Registro17313 crear_registro17313(int id) {
    Registro17313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
