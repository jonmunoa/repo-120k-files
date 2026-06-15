// fichero 19125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19125;

Registro19125 crear_registro19125(int id) {
    Registro19125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
