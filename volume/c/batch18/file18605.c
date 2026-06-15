// fichero 18605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18605;

Registro18605 crear_registro18605(int id) {
    Registro18605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
