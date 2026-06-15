// fichero 24057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24057;

Registro24057 crear_registro24057(int id) {
    Registro24057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
