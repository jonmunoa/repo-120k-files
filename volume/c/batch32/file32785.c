// fichero 32785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32785;

Registro32785 crear_registro32785(int id) {
    Registro32785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
