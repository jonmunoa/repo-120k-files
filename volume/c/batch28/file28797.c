// fichero 28797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28797;

Registro28797 crear_registro28797(int id) {
    Registro28797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
