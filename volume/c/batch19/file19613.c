// fichero 19613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19613;

Registro19613 crear_registro19613(int id) {
    Registro19613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
