// fichero 17837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17837;

Registro17837 crear_registro17837(int id) {
    Registro17837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
