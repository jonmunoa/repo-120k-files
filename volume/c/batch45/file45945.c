// fichero 45945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45945;

Registro45945 crear_registro45945(int id) {
    Registro45945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
