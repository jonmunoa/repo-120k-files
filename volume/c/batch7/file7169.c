// fichero 7169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7169;

Registro7169 crear_registro7169(int id) {
    Registro7169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
