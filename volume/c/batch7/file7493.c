// fichero 7493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7493;

Registro7493 crear_registro7493(int id) {
    Registro7493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
