// fichero 6801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6801;

Registro6801 crear_registro6801(int id) {
    Registro6801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
