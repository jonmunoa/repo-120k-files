// fichero 39745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39745;

Registro39745 crear_registro39745(int id) {
    Registro39745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
