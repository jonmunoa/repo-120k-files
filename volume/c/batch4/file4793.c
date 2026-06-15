// fichero 4793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4793;

Registro4793 crear_registro4793(int id) {
    Registro4793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
