// fichero 47933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47933;

Registro47933 crear_registro47933(int id) {
    Registro47933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
