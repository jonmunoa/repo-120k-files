// fichero 16673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16673;

Registro16673 crear_registro16673(int id) {
    Registro16673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
