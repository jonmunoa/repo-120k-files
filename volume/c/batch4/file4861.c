// fichero 4861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4861;

Registro4861 crear_registro4861(int id) {
    Registro4861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
