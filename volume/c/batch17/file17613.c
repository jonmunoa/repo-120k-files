// fichero 17613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17613;

Registro17613 crear_registro17613(int id) {
    Registro17613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
