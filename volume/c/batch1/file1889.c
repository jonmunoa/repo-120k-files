// fichero 1889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1889;

Registro1889 crear_registro1889(int id) {
    Registro1889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
