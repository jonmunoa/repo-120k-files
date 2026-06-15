// fichero 28569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28569;

Registro28569 crear_registro28569(int id) {
    Registro28569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
