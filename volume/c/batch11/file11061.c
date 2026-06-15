// fichero 11061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11061;

Registro11061 crear_registro11061(int id) {
    Registro11061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
