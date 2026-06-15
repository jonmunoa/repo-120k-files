// fichero 30217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30217;

Registro30217 crear_registro30217(int id) {
    Registro30217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
