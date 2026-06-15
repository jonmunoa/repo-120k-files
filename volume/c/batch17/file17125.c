// fichero 17125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17125;

Registro17125 crear_registro17125(int id) {
    Registro17125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
