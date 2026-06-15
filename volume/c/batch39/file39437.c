// fichero 39437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39437;

Registro39437 crear_registro39437(int id) {
    Registro39437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
