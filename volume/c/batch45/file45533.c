// fichero 45533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45533;

Registro45533 crear_registro45533(int id) {
    Registro45533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
