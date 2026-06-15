// fichero 12321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12321;

Registro12321 crear_registro12321(int id) {
    Registro12321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
