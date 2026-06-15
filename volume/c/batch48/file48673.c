// fichero 48673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48673;

Registro48673 crear_registro48673(int id) {
    Registro48673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
