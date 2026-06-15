// fichero 1693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1693;

Registro1693 crear_registro1693(int id) {
    Registro1693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
