// fichero 18677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18677;

Registro18677 crear_registro18677(int id) {
    Registro18677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
