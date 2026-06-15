// fichero 6969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6969;

Registro6969 crear_registro6969(int id) {
    Registro6969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
