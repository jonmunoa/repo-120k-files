// fichero 1601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1601;

Registro1601 crear_registro1601(int id) {
    Registro1601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
