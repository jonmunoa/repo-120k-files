// fichero 32677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32677;

Registro32677 crear_registro32677(int id) {
    Registro32677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
