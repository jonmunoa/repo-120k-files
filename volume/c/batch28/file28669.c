// fichero 28669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28669;

Registro28669 crear_registro28669(int id) {
    Registro28669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
