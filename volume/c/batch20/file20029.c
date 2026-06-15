// fichero 20029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20029;

Registro20029 crear_registro20029(int id) {
    Registro20029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
