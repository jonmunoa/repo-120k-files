// fichero 17581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17581;

Registro17581 crear_registro17581(int id) {
    Registro17581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
