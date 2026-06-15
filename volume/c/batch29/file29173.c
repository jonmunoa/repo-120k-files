// fichero 29173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29173;

Registro29173 crear_registro29173(int id) {
    Registro29173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
