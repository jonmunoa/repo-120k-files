// fichero 28057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28057;

Registro28057 crear_registro28057(int id) {
    Registro28057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
