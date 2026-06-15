// fichero 28081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28081;

Registro28081 crear_registro28081(int id) {
    Registro28081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
