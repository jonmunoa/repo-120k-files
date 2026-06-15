// fichero 16965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16965;

Registro16965 crear_registro16965(int id) {
    Registro16965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
