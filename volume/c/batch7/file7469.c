// fichero 7469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7469;

Registro7469 crear_registro7469(int id) {
    Registro7469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
