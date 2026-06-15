// fichero 17097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17097;

Registro17097 crear_registro17097(int id) {
    Registro17097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
