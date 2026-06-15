// fichero 4169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4169;

Registro4169 crear_registro4169(int id) {
    Registro4169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
