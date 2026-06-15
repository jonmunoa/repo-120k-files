// fichero 16737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16737;

Registro16737 crear_registro16737(int id) {
    Registro16737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
