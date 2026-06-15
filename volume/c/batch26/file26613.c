// fichero 26613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26613;

Registro26613 crear_registro26613(int id) {
    Registro26613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
