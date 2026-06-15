// fichero 4585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4585;

Registro4585 crear_registro4585(int id) {
    Registro4585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
