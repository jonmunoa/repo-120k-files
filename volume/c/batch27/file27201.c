// fichero 27201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27201;

Registro27201 crear_registro27201(int id) {
    Registro27201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
