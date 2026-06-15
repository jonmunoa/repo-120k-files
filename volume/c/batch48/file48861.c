// fichero 48861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48861;

Registro48861 crear_registro48861(int id) {
    Registro48861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
