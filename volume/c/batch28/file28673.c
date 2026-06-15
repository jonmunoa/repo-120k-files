// fichero 28673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28673;

Registro28673 crear_registro28673(int id) {
    Registro28673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
