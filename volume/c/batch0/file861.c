// fichero 861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro861;

Registro861 crear_registro861(int id) {
    Registro861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
