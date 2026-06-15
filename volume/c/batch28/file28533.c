// fichero 28533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28533;

Registro28533 crear_registro28533(int id) {
    Registro28533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
