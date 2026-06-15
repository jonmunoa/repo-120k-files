// fichero 28169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28169;

Registro28169 crear_registro28169(int id) {
    Registro28169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
