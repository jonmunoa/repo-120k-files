// fichero 28177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28177;

Registro28177 crear_registro28177(int id) {
    Registro28177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
