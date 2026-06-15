// fichero 48993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48993;

Registro48993 crear_registro48993(int id) {
    Registro48993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
