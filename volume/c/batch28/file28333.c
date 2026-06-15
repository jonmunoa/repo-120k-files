// fichero 28333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28333;

Registro28333 crear_registro28333(int id) {
    Registro28333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
