// fichero 19169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19169;

Registro19169 crear_registro19169(int id) {
    Registro19169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
