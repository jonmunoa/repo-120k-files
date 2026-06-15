// fichero 30629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30629;

Registro30629 crear_registro30629(int id) {
    Registro30629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
