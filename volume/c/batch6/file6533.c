// fichero 6533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6533;

Registro6533 crear_registro6533(int id) {
    Registro6533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
