// fichero 48801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48801;

Registro48801 crear_registro48801(int id) {
    Registro48801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
