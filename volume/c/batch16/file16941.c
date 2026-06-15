// fichero 16941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16941;

Registro16941 crear_registro16941(int id) {
    Registro16941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
