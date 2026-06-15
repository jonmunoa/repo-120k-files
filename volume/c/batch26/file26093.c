// fichero 26093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26093;

Registro26093 crear_registro26093(int id) {
    Registro26093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
