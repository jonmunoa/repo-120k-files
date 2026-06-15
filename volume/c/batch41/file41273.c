// fichero 41273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41273;

Registro41273 crear_registro41273(int id) {
    Registro41273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
