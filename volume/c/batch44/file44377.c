// fichero 44377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44377;

Registro44377 crear_registro44377(int id) {
    Registro44377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
