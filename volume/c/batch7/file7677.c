// fichero 7677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7677;

Registro7677 crear_registro7677(int id) {
    Registro7677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
