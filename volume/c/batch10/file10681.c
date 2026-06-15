// fichero 10681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10681;

Registro10681 crear_registro10681(int id) {
    Registro10681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
