// fichero 14733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14733;

Registro14733 crear_registro14733(int id) {
    Registro14733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
