// fichero 17369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17369;

Registro17369 crear_registro17369(int id) {
    Registro17369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
