// fichero 17673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17673;

Registro17673 crear_registro17673(int id) {
    Registro17673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
