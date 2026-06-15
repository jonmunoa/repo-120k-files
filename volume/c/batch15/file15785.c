// fichero 15785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15785;

Registro15785 crear_registro15785(int id) {
    Registro15785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
