// fichero 4805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4805;

Registro4805 crear_registro4805(int id) {
    Registro4805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
