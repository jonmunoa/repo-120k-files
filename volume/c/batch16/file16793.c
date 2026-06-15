// fichero 16793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16793;

Registro16793 crear_registro16793(int id) {
    Registro16793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
