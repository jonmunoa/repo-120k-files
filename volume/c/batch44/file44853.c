// fichero 44853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44853;

Registro44853 crear_registro44853(int id) {
    Registro44853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
