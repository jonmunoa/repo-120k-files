// fichero 4349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4349;

Registro4349 crear_registro4349(int id) {
    Registro4349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
