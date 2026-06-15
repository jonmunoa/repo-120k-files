// fichero 1861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1861;

Registro1861 crear_registro1861(int id) {
    Registro1861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
