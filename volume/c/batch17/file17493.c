// fichero 17493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17493;

Registro17493 crear_registro17493(int id) {
    Registro17493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
