// fichero 1749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1749;

Registro1749 crear_registro1749(int id) {
    Registro1749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
