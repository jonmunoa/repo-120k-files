// fichero 39533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39533;

Registro39533 crear_registro39533(int id) {
    Registro39533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
