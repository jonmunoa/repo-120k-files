// fichero 28881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28881;

Registro28881 crear_registro28881(int id) {
    Registro28881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
