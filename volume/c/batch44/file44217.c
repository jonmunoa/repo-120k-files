// fichero 44217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44217;

Registro44217 crear_registro44217(int id) {
    Registro44217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
