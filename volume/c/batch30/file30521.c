// fichero 30521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30521;

Registro30521 crear_registro30521(int id) {
    Registro30521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
