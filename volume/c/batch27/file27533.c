// fichero 27533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27533;

Registro27533 crear_registro27533(int id) {
    Registro27533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
