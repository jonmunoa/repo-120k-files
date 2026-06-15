// fichero 38853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38853;

Registro38853 crear_registro38853(int id) {
    Registro38853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
