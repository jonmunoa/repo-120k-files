// fichero 16789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16789;

Registro16789 crear_registro16789(int id) {
    Registro16789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
