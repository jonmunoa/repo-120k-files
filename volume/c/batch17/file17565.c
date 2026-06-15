// fichero 17565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17565;

Registro17565 crear_registro17565(int id) {
    Registro17565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
