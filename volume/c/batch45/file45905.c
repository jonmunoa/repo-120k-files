// fichero 45905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45905;

Registro45905 crear_registro45905(int id) {
    Registro45905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
