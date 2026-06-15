// fichero 39997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39997;

Registro39997 crear_registro39997(int id) {
    Registro39997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
