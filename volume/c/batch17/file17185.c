// fichero 17185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17185;

Registro17185 crear_registro17185(int id) {
    Registro17185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
