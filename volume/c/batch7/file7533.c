// fichero 7533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7533;

Registro7533 crear_registro7533(int id) {
    Registro7533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
