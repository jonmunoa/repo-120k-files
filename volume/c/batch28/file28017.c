// fichero 28017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28017;

Registro28017 crear_registro28017(int id) {
    Registro28017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
