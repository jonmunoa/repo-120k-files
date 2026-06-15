// fichero 45153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45153;

Registro45153 crear_registro45153(int id) {
    Registro45153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
