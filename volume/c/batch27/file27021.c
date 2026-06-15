// fichero 27021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27021;

Registro27021 crear_registro27021(int id) {
    Registro27021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
