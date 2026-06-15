// fichero 39677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39677;

Registro39677 crear_registro39677(int id) {
    Registro39677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
