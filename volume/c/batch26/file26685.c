// fichero 26685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26685;

Registro26685 crear_registro26685(int id) {
    Registro26685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
