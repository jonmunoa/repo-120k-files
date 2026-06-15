// fichero 48193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48193;

Registro48193 crear_registro48193(int id) {
    Registro48193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
