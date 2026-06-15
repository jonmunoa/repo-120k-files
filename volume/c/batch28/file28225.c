// fichero 28225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28225;

Registro28225 crear_registro28225(int id) {
    Registro28225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
