// fichero 28109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28109;

Registro28109 crear_registro28109(int id) {
    Registro28109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
