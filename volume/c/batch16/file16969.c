// fichero 16969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16969;

Registro16969 crear_registro16969(int id) {
    Registro16969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
