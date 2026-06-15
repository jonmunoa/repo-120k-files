// fichero 17845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17845;

Registro17845 crear_registro17845(int id) {
    Registro17845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
