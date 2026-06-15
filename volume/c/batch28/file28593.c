// fichero 28593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28593;

Registro28593 crear_registro28593(int id) {
    Registro28593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
