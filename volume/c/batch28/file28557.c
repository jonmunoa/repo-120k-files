// fichero 28557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28557;

Registro28557 crear_registro28557(int id) {
    Registro28557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
