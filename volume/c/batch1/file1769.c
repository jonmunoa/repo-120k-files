// fichero 1769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1769;

Registro1769 crear_registro1769(int id) {
    Registro1769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
