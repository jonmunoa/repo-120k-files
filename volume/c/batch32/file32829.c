// fichero 32829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32829;

Registro32829 crear_registro32829(int id) {
    Registro32829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
