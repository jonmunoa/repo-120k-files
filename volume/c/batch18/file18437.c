// fichero 18437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18437;

Registro18437 crear_registro18437(int id) {
    Registro18437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
