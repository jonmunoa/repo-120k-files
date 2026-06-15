// fichero 13949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13949;

Registro13949 crear_registro13949(int id) {
    Registro13949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
