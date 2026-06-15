// fichero 47065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47065;

Registro47065 crear_registro47065(int id) {
    Registro47065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
