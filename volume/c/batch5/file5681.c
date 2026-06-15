// fichero 5681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5681;

Registro5681 crear_registro5681(int id) {
    Registro5681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
