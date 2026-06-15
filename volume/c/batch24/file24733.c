// fichero 24733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24733;

Registro24733 crear_registro24733(int id) {
    Registro24733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
