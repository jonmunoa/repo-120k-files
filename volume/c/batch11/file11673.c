// fichero 11673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11673;

Registro11673 crear_registro11673(int id) {
    Registro11673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
