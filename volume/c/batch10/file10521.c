// fichero 10521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10521;

Registro10521 crear_registro10521(int id) {
    Registro10521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
