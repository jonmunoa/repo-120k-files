// fichero 48837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48837;

Registro48837 crear_registro48837(int id) {
    Registro48837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
