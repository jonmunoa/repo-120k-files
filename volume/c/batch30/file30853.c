// fichero 30853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30853;

Registro30853 crear_registro30853(int id) {
    Registro30853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
