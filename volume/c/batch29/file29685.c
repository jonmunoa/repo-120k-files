// fichero 29685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29685;

Registro29685 crear_registro29685(int id) {
    Registro29685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
