// fichero 44609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44609;

Registro44609 crear_registro44609(int id) {
    Registro44609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
