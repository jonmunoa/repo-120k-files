// fichero 32533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32533;

Registro32533 crear_registro32533(int id) {
    Registro32533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
