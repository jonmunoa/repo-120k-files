// fichero 4565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4565;

Registro4565 crear_registro4565(int id) {
    Registro4565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
