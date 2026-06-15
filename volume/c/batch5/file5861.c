// fichero 5861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5861;

Registro5861 crear_registro5861(int id) {
    Registro5861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
