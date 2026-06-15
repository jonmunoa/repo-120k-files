// fichero 1853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1853;

Registro1853 crear_registro1853(int id) {
    Registro1853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
