// fichero 1657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1657;

Registro1657 crear_registro1657(int id) {
    Registro1657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
