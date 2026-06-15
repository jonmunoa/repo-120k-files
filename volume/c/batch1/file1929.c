// fichero 1929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1929;

Registro1929 crear_registro1929(int id) {
    Registro1929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
